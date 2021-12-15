# README 寫法說明
有空再補ㄏㄏㄏ
## 第一題
題目：
```
請撰寫三個 double 函式 toJPY、toEUR、toTWD，這三個函式皆會接受美元 (整數)輸入並分別換算輸出成等值的日圓、歐元、新台幣。
匯率為 1 美元=104.18 日圓、1 美元= 0.8479 歐元、1 美元=28.21 新台幣。
```

直接透過全域變數usd賦值，帶入運算即可
Just use global variable "usd" to calulate, in this approach we can avoid passing the value and use less memory space.

## 第二題
題目：
```
如果一個整數的所有因數(包括 1、但不包含這個數本身)加起來的和等於該數，那麼該數便被稱為完全數。例如 6 便是一個完全數，因為 6=1+2+3。
請撰寫一個函式 isPerfect 來判斷參數 number 是否是個完全數，再將此函式 應用到一個程式上，該程式會接收一個數字 limit，並將會印出 1~limit 之間 所有的完全數。
```
在isPerfect函數中，先將紀錄因數和的變數*factorSum*進行初始化，再進行因數分解，同時將分解出的因數進行加總，當因數分解完成後，比對數值是否相等就可以知道是不是完全數

In the 'isPerfect' function, we first initialize the variable  *factorSum* which used to sum up all the factor, then factorize the  iterator value and compare the value after the factorize process is done.

## 第三題
```
請撰寫一個程式來模擬擲硬幣 10 次的動作。此程式會在每一次投擲後印出 該次的結果，並在最後計算並印出各結果總共的次數。該程式需要呼叫一個 稱為 flip()的函式，他沒有任何引數，當它傳回 0 時代表反面，傳回 1 時代 表正面。(你可能會需要用到 rand()函式，該函式會回傳一個亂數給你。)
```
* flip()部分
設置flip()以rand()進行亂數取值，接著直接回傳對2取餘數的值（只會是0或1），代表每一次的擲幣結果
* main()部分
設置result, Tct, Hct三個整數變數空間，因Tct, Hct的用途是紀錄正反面出現次數，故需要先進行初始化；
進入執行十次的迴圈，呼叫flip()將回傳值存到result中，並輸出、紀錄每一次的flip()結果，
註：這邊用到了三元運算子*(condition)?True expression:False expression*，
在17行若result為1，輸出"Heads"，反之輸出"Tails"，在18行則若true進行Hct的遞增，false則Tct的遞增。
## 第四題
```
LCM(lowest common multiple)是最小公倍數的意思，請撰寫一個函式 LCM()，該函式會獲得兩個整數並回傳該兩個整數的最小公倍數。
```
我們先回想最小公倍數在職因數分解後的定義：
```
取全部出現的直因數，及最大的指數
```
我們看到這題後要做的，就是將這個概念轉換成程式碼

首先定義我們會用到的變數：
```=
int lcm=1;
int i=2;
```
1. lcm  紀錄目前已經分解出的因數的乘積
2. 除數，也就是因數

接著，在LCM方面，需要的參數為兩個整數，接著進行判斷其中一個是不是一，若結果為真則直接回傳兩數相乘的結果，若否，則進行因數的分解
```c=
while( a>=i && b>=i )
        {
        while( a%i==0 && b%i==0 )
        {
                lcm = lcm * i;
                a /= i;
                b /= i;
            }
            i++;
        }
        lcm=lcm*a*b;
    }
```
- while的作用：
    - 外層的while是在對是否其中一個數已分解到終點進行判斷，若達到終點則把lcm, a, b進行最後一次的算數
    - 內層的while在對a,b進行同一個因數的連除，除了幾次lcm也乘了幾次，當兩者對當前除數i有其中一個無法整除時，進行i的遞增直到找到下一個的公因數，或直接達到質因數分解終點

以12,8找最小公因數為例：
- 12,8皆可被2整除，故二者同除以2，lcm*2
- 6,4可被2整除，6,4除以2，lcm*2
- 3,2發現已達到因數分解終點
- lcm\*2\*3=24

## 第五題
```
試撰寫一程式，由鍵盤輸入一個整數作為上限，然後用一個函式 countPrime()計算 1 到此上限共有幾個質數。
(質數是指除了 1 和它本身之外，沒有其他的數可以整除它的數，例如，
2,3,5,7 與 11 等皆為質數)
```
