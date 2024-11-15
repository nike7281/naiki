int main(void)
{
    int mikuru,kai,peteraerts;
    
    mikuru=175; //未来の身長
    kai=175; //海の身長
    peteraerts=190; //ピーター・アーツの身長
    
    //変数と定数の比較
    if(mikuru==175)
      printf("未来は175cmです\n");
    if(peteraerts !=175)
      printf("ピーター・アーツは175cmではありません\n");
    if(kai>170)
      printf("海は170cmよりも大きいです\n");
    if(peteraerts>=190)
      printf("ピーター・アーツは190cm以上です\n");
      
      //変数と変数の比較
    if(mikuru==kai)
      printf("未来と海は同じ身長です");
    if(mikuru<peteraerts)
      printf("未来はピーター・アーツよりも小さいです");
    if(kai<peteraerts)
      printf("海はピーター・アーツよりも大きいです");
      
     return 0;
}