

    #include<stdio.h>
     
     
    main()
    {
            int x, abc, bit, bit1, i, y, nobit=0, div=1, ask;
            printf("please enter a number: ");
            scanf("%d", &x);//enter number
            y=x;
            while(y!=0)
            {
                    nobit++;
                    y=y/10;
            } 
            printf("Please enter the the roundup digit: ");
            scanf("%d", &ask);//enter rounding digit
            for(i=nobit; i>ask;i--)
                    div*=10;
            abc=x/div;
            bit=abc%10;
            bit1=(x/(div/10))%10;
    /*      printf("%d\n",abc);
            printf("%d\n",bit);
            printf("%d\n", bit1);*/
            if(bit1<5)
                    printf("%d", abc);
            if(bit1>5)
                    printf("%d", abc+1);
            if(bit1==5)
            {
                    if(bit%2==1)
                            printf("%d",abc+1);
                    else
                            printf("%d",abc);
                   
            }
    }


