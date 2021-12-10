# README 寫法說明
有空再補ㄏㄏㄏ
## 第一題
題目：
```
 請撰寫三個 double 函式 toJPY、toEUR、toTWD，這三個函式皆會接受美元 (整數)輸入並分別換算輸出成等值的日圓、歐元、新台幣。
匯率為 1 美元=104.18 日圓、1 美元= 0.8479 歐元、1 美元=28.21 新台幣。
直接透過全域變數usd賦值，帶入運算即可
```

Just use global variable "usd" to calulate, in this approach we can avoid passing the value and use less memory space.

## 第二題
題目：
```
如果一個整數的所有因數(包括 1、但不包含這個數本身)加起來的和等於該 數，那麼該數便被稱為完全數。例如 6 便是一個完全數，因為 6=1+2+3。 請撰寫一個函式 isPerfect 來判斷參數 number 是否是個完全數，再將此函式 應用到一個程式上，該程式會接收一個數字 limit，並將會印出 1~limit 之間 所有的完全數。
```
在isPerfect函數中，先將紀錄因數和的變數*factorSum*進行初始化，再進行因數分解，同時將分解出的因數進行加總，當因數分解完成後，比對數值就可以知道是不是完全數

In the 'isPerfect' function, we first initialize the variable  *factorSum* which used to sum up all the factor, then factorize the  iterator value and compare the value after the factorize process is done.

## 第三題
```
請撰寫一個程式來模擬擲硬幣 10 次的動作。此程式會在每一次投擲後印出 該次的結果，並在最後計算並印出各結果總共的次數。該程式需要呼叫一個 稱為 flip()的函式，他沒有任何引數，當它傳回 0 時代表反面，傳回 1 時代 表正面。(你可能會需要用到 rand()函式，該函式會回傳一個亂數給你。)
```


```
```

