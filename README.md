# printf

## 概要
このコードは、42tokyoの課題の一環としてC言語のprintf関数を再現するという課題が課されたためにコーディングしたものです。  

### ft_printf関数の使用
`ft_printf`関数は、C言語の`printf`関数の出力結果を再現するように作られています。  
戻り値として出力した文字の文字数が返ってきます。  
printf関数の詳しい仕様

`ft_printf`関数がフォーマット指定子として使用できるものはは以下の通りです。  

- %c（文字を表示させる）
- %s（文字列を表示させる）
- %d（整数を10進数を表示させる）
- %i（整数を10進数を表示させる）
- %u（符号なし整数を10進数として表示させる）
- %x（整数を16進数（小文字）を表示させる）
- %X（整数を16進数（大文字）を表示させる）
- %p（ポインタを16進数で表示させる）
- %%（%を文字として表示させる）

`ft_printf`関数は、「0フラグ」と「-フラグ」も使用することができます。  

また、`ft_printf`関数は「最小フィールド幅」「精度」にも対応しており、本家の`printf`関数と同じく「\*」を用いて引数として値を受け取ることが可能です。  

## 目的
`printf`関数は任意の数の引数を受け取ることができます。  
そのため、`ft_printf`関数も任意の数の引数を受け取ることができるような仕様にする必要がありました。  
そこで、`va_arg`系の使い方について習得し、引数の数が初めから決まっていない場合にどのように対応すれば良いかの知見を得ることが目的の一つでした。  
また、既存の関数をどのように再現するかについての仕様を考え、コードに落とし込むという力を養うことももう一つの目的でした。  


## 使い方
まず初めに、makeを使用してCファイルをコンパイルし、アーカイブファイルにします。  
そうすることで、`libftprintf.a`という名前のアーカイブファイルが作成されます。  

また、自作関数である`ft_printf`関数を使用するためのmain関数を作成する必要があります。  

以下のコマンドを実行してください。  

```shell
git clone https://github.com/HaseU-git/printf
cd project
make
```

次に、`ft_printf`関数を仕様するためのmainファイルを作成していきます。  
ここでは、本家のprintfと比較するような形のmainを作成していきます。  

以下のコマンドを実行してください。  

```shell
echo "#include <stdio.h>
#include <stdlib.h>
#include \"ft_printf.h\"
#include <limits.h>

#define BAR \"================\\n\\n\"
#define ORIGINAL \"\\n\\n=====printf=====\"
#define MINE \"====ft_printf====\"

int main()
{
	int p = 9;
	unsigned int u = 100;
	char *test = \"test\";

	printf(\"%s\\n\", ORIGINAL);
	printf(\"%c\\n%s\\n%p\\n%d\\n%i\\n%u\\n%x\\n%X\\n%%\\n\", 'a', \"abcd\", &p, p, p, u, p, p);
	printf(\"%s\\n\", MINE);
	ft_printf(\"%c\\n%s\\n%p\\n%d\\n%i\\n%u\\n%x\\n%X\\n%%\\n\", 'a', \"abcd\", &p, p, p, u, p, p);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"test%s\\n%p\\n%d\\n%d\\n%d\\n\", \"\", NULL, 0, INT_MAX, INT_MIN);
	printf(\"%s\\n\", MINE);
	ft_printf(\"test%s\\n%p\\n%d\\n%d\\n%d\\n\", \"\", NULL, 0, INT_MAX, INT_MIN);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%-1s'\\n'%-4s'\\n'%-8s'\\n\", test, test, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%-1s'\\n'%-4s'\\n'%-8s'\\n\", test, test, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%0-1s'\\n'%04s'\\n'%08s'\\n\", test, test, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%0-1s'\\n'%04s'\\n'%08s'\\n\", test, test, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%1.10s'\\n'%.3s'\\n'%8.s'\\n\", test, test, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%1.10s'\\n'%.3s'\\n'%8.s'\\n\", test, test, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*s'\\n\", 8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*s'\\n\", 8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*s'\\n\", -8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*s'\\n\", -8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*s'\\n\", 0, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*s'\\n\", 0, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%.*s'\\n\", 0, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%.*s'\\n\", 0, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%.*s'\\n\", -8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%.*s'\\n\", -8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%.*s'\\n\", 8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%.*s'\\n\", 8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%.*s'\\n\", 3, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%.*s'\\n\", 3, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%.*s'\\n\", -3, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%.*s'\\n\", -3, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*.*s'\\n\", 8, 0, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*.*s'\\n\",8, 0, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*.*s'\\n\", 8,-8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*.*s'\\n\",8, -8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*.*s'\\n\",-6, 8, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*.*s'\\n\",-6, 8, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*.*s'\\n\",-10 ,3, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*.*s'\\n\",-10, 3, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%*.*s'\\n\",10, -3, test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%*.*s'\\n\",10, -3, test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"%--------s\\n\", test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"%--------s\\n\", test);
	printf(\"%s\\n\", BAR);

	printf(\"%s\\n\", ORIGINAL);
	printf(\"'%%%%%0--*.*s'\\n\", -8, 3,test);
	printf(\"%s\\n\", MINE);
	ft_printf(\"'%%%%%0--*.*s'\\n\", -8, 3, test);
	printf(\"%s\\n\", BAR);

	return (0);
}" > main.c
```

ここでは精度、最小フィールド幅などを組み合わせてさまざまなパターンを試しています。 

mainファイルを書き終えたらコンパイルし、実行ファイルを作成し実行します。  

```
gcc main.c libftprintf.a
./a.out
```

## 開発環境
- MacBook Pro (15-inch, 2018)
- macOS Big Sur Version 11.2.1
- Apple clang version 12.0.0 (clang-1200.0.32.29)
- GNU Make 3.81
