/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:29:12 by akisuzuk          #+#    #+#             */
/*   Updated: 2022/11/27 11:29:12 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//=====================
//コメント
//=====================
// [20221127]
//
//



//=====================
//ヘッダインクルード
//=====================
#include <fcntl.h>     // open用
#include <stdio.h>     // printf用
#include <unistd.h>    // read, write, close用
#include <errno.h>     // strerror用, errno用
#include <string.h>    // strerror用
#include <stdlib.h>    // malloc用
#include <malloc.h>    // mallocで確保したサイズ確認用


//=====================
// 必要であればマクロ設定
//=====================
//#define BUFSIZE 100


//=====================
//プロトタイプ宣言
//=====================
void ft_putnbr(int nb);
//void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));


//=====================
// メイン部分
//=====================

// こいつが動作の本体ってことなんだろうが、まだポインタ関数の威力を理解できていない。。。
int onlyreturn(int num){
	return num;
}

// 戻り値が配列だからft_mapに*がついてんだな
int *ft_map(int *tab, int length, int(*f)(int)){

	//int *ret[5];
	// ↑　関数の中で定義した配列って、ローカル変数になるらしく戻り値にできないらしいです。。。（今知ったorz）
	// なので、mallocで動的に確保したやつを戻り値にする必要あり
	int *ret;
	int i=0;

	ret = (int *)malloc(length * sizeof(int));

	while(i<length){
		ret[i] = f(tab[i]);    // うーん、ポインタ関数を使う意味よ...(配列を戻り値にできないという知識が得られただけの課題)
		i++;
	}

	return ret;
}

int main(void){

	int hairetu[5] = {1, 2, 3, 4, 5};

	ft_map(hairetu, 5, &onlyreturn);

	//return 0;
}
