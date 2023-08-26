def my_fun(in1,in2,in3,in4,in5,in6,in7,in8,in9,in10,key1,key2,key3,key4,key5,key6,key7,key8,key9,key10,key11,key12,key13,key14,key15,key16,key17,key18,key19,key20):

    mult1 = in1 * in2
    mult2 = in1 * key1 if key7 else in1 - 2
    mult3 = in3 * key2 if key8 else in3 + 10
    mult4 = in4 * in5
    mult5 = in3 * in2 if key9 else in3 + 4
    mult6 = in2 * in5
    mult7 = in3 * in6 if key10 else in3 + 9
    mult8 = in4 * in7
    mult9 = in4 * in8
    mult10 = in6 * in9 if key11 else in6 + 100
    mult11 = in6 * in8
    mult12 = in7 * in9 if key12 else in7 + 100
    mult13 = in7 * in8
    mult14 = in9 * in10

    add1 = in1 * mult2 if key18 else in1 + 34
    add2 = key3 * mult4
    add3 = in5 * mult8
    add4 = mult10 * in4
    add5 = in10 - mult14 if key14 else in10 * mult14

    add6 = mult1 * add1 if key13 else mult1 + add1
    
    out1 = add6 + key4

    add7 = mult3 - add2 if key15 else mult3 + add2
    add8 = mult5 / add7 if key16 else mult5 + add7

    add10 = mult7 + add3
    add9 = mult6 + add10

    shf1 = add9 << 2 if key17 else add9 << 3
    
    out2 = add8 + shf1 + key5

    add13 = mult9 * add4
    add11 = add13 + mult11

    add15 = mult13 - add5 if key19 else mult13 + add5
    add14 = mult12 + add15

    shf2 = add14 >> 4 if key20 else add14 >> 3
    
    out3 = add11 + shf2 + key6

    return (out1,out2,out3)



ans = my_fun(1,2,3,4,5,6,7,8,9,10,0,0,0,310,582,-13225,True,False,False,False,False,False,False,False,False,False,False,True,False,False)
print(ans)


