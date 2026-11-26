bool canAliceWin(int n) {
    int decrease = -10;
    int turn = 0;
    while(n>=0){
        n = n + decrease;
        decrease++;
        turn = turn == 1 ? 0 : 1;
    }
    if(n<0 && turn == 0)
        return true;
    else
        return false;
}