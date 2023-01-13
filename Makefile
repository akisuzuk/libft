#==============================================
# Makefileの中で用いる変数（マクロ）の設定
#==============================================
# コンパイラの指定
CC     := gcc  # ":="は単純展開マクロ、"="は再起展開マクロ



# コンパイルオプションの指定
CFLAGS := -Wall -Wextra -Werror


# 実行ファイル名(いままでのa.out)
#TARGET = exetest
#PROGRAM = display_file
PROGRAM = ft_hexdump


# 生成したい静的ライブラリ名
#NAME    = hoge.a

#---------------------------------------------
# コンパイル対象としたいプログラム一覧
#SRCDIR  = ./srcs
#SRCS     = $(wildcard $(SRCDIR)/*.c)
# ↑とりあえず回すためにワイルドカードにしたけど、無関係な.c読み込まないようにすべきらしい
# あとディレクトリも変数化(SRCDIR)して簡潔に記述したかったのに認識されない...

# めんどくさいけど、名指しの場合はひとつづつ記述。ディレクトリも変数化せず手打ち
#SRCS    = ./srcs/ft_putchar.c \
#		  ./srcs/ft_putstr.c  \
#          ./srcs/ft_strcmp.c  \
#          ./srcs/ft_strlen.c  \
#          ./srcs/ft_swap.c

#ワイルドカード使わないなら普通に書くだけ
SRCS = 	ft_hexdump.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_strlen.c \
		ft_strcmp.c
#---------------------------------------------

# 生成したいオブジェクトファイル名（基本は拡張子変えるだけ）
OBJS    = $(SRCS:.c=.o)


# インクルードファイルのパス指定
INC     =



# ライブラリファイルのパス指定
LIB     =



#==============================================
# 成規則(ファイルの本体部分)
#==============================================
# まず基本の肩は。コマンド名:→(改行＆タブ)→呼び出されるルール
# "make"コマンドを実行するとMakefile中で一番最初に見つかるルールが適用される
# 例を示すと↓
#TEXT = "this is a sample."
#show_text:
#        echo $(TEXT)



#$(NAME): $(OBJS)
        # オブジェクトファイル生成。ライブラリ生成してオブジェクトファイルとリンク
        # ここがミソで、リンクすることでライブラリ内の関数を使用することができるようになる
        # include<stdio.h>した状態
#		ar rc $(NAME) $(OBJS)

        # アーカイブの中身のインデックスを生成し、アーカイブ中に格納（とは）
#		ranlib $(NAME)

# 今回は静的ライブラリとかないので直接実行
$(PROGRAM): $(OBJS)
	$(CC) -o $(PROGRAM) $^

# 更新されてないファイルの毎回コンパイルされるのを防ぐように、個別の.cについて記載(面倒だけどな...)
# [復習]　$< は依存ファイル(↓コロンの後に続くファイル名)の先頭のファイル名
ft_tail.o: ft_hexdump.c
	$(CC) $(CFLAGS) -c $<

ft_putstr.o: ft_putstr.c
	$(CC) $(CFLAGS) -c $<

ft_putnbr.o: ft_putnbr.c
	$(CC) $(CFLAGS) -c $<

ft_strlen.o: ft_strlen.c
	$(CC) $(CFLAGS) -c $<

ft_strcmp.o: ft_strcmp.c
	$(CC) $(CFLAGS) -c $<

# サフィックスルール(とは)
# c言語で、必ず.cから.oファイルが作られる性質を利用してルール化したもの
#.c.o:
#	$(CC) -c $< -o $@
.c.o:
	$(CC) $(CFLAGS) -c $<




#==============================================
# make 以外の操作がしたいとき
#==============================================

# 全部実行するコマンド
# .cからおbジェクトファイル生成
# →静的ライブラリ.aを生成し、すべてのお部jr区とファイルをリンクさせる
# →.aにインデックスを付与（←これよく分からん）
all: $(PROGRAM)

# オブジェクトファイルのみ削除
clean:
		rm -f $(OBJS)

# すべてのオブジェクトファイルに加え、実行ファイルや静的ライブラリを削除
#
fclean: clean
		rm -f $(PROGRAM)

# fcleanを実行してから改めてコンパイルする
re: fclean all
