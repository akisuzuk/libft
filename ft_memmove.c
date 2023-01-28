/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:15:47 by akisuzuk          #+#    #+#             */
/*   Updated: 2023/01/28 15:11:03 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

// 	restrictが使えないならmemcpyと一緒だよね。。。？
// 違いましたーアホです。書き込み領域被ってると書き込みながら書き込みもとが変更される可能性がある
// なのでポインタの大小を比較して、被らない方向からコピってけばOK

// あれ、なんでマイナスインクリメントは前置なんだろ
// 前置だとインクリメントしてから代入だよね
// 調べたら、+=int_lenは指定範囲を一つ超えたとこを指してるっぽい(1文字コピるならlen=0が正しいので)
// なので、正確には書き換え部分は+=(int_len -1)から始まるからインクリメントは前置で
// ポインタずらしてから代入する必要があると
// 理由として、ポインタに整数値の加減算をするとき、結果のポインタは
// 同じ配列ないの要素を指すか、配列の最後の要素を一つ超えたところを刺さなければならないからです
// 全くわからないけどそういうことらしいです＼(^o^)／

// これ、if突入した後にreturn (unchar_dst)ってするとテスター弾かれるのなんなんだ
// memcpyはそれでもok出たのに。。。
void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					int_len;
	unsigned char		*unchar_dst;
	const unsigned char	*cons_unchar_src;

	int_len = (int)len;
	unchar_dst = (unsigned char *)dst;
	cons_unchar_src = (const unsigned char *)src;
	if (dst <= src)
	{
		while (int_len--)
			*unchar_dst++ = *cons_unchar_src++;
	}
	else
	{
		unchar_dst += int_len;
		cons_unchar_src += int_len;
		while (int_len--)
			*--unchar_dst = *--cons_unchar_src;
	}
	return (dst);
}

//
//int	main(void)
//{
////	char	str1[256];
////	char	str2[256];
////	int		n;
////
////	str1[0] = 'a';
////	str1[1] = 'b';
////	str1[2] = 'c';
////	str1[3] = 'd';
////	str1[4] = 'e';
////	str1[5] = '\0';
////	str2[0] = 'A';
////	str2[1] = 'B';
////	str2[2] = 'C';
////	str2[3] = '\0';
////	n = 0;
////	printf("str1=%s\n", str1);
////	printf("%s\n", str2);
////	//ft_memmove(str1+1, str2, 2);
////	memmove(str1+1, str2, 2);
////	printf("str1=%s\n", str1);
////	printf("%s\n", str2);
////
//	char s[] = {65, 66, 67, 68, 69, 0, 45};
//	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
//	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
//	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
//	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
//
//	//ft_memmove(s0, s, 7);
//	//memmove(s0, s, 7);
//	printf("dst=%s\n", s0);
//	printf("src=%s\n", s);
//	ft_memmove(s0, s, 7);
//	memmove(s0, s, 7);
//	printf("dst_after=%s\n", s);
//	return (0);
//}
//