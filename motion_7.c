mult1 = in1 * in2;
mult2 = key7 ? in1 * key1 : in1 - 2;
mult3 = key8? in3 * key2: in3 + 10;
mult4 = in4 * in5;
mult5 = key9? in3 * in2: in3 + 4;
mult6 = in2 * in5;
mult7 = key_10? in3 * in6 : in3 +9;
mult8 = in4 * in7;
mult9 = in4 * in8;
mult10 = key_11? in6 * in9 : in6 +100;
mult11 = in6 * in8;
mult12 = key_12 ? in7 * in9 : in7 +100;
mult13 = in7 * in8;
mult14 = in9 * in10;

add1 = key_18 ? in1 * mult2 : in1 + 34;
add2 = key3 * mult4;
add3 = in5 * mult8;
add4 = mult10 * in4;
add5 = key_14 ? in10 - mult14 : in10 * mult14;

add6 = key_13 ? mult1 * add1 : mult1 + add1;
out1 = add6+key4;

add7 = key_15 ? mult3 - add2 : mult3 + add2;
add8 = key_16 ? mult5 / add7 : mult5 + add7;

add10 = mult7 + add3;
add9 = mult6 + add10;

shf1 = key_17 ? add9 << 2 : add9 << 3;
out2 = add8 + shf1+key5;

add13 = mult9 * add4;
add11 = add13 + mult11;

add15 = key_19 ? mult13 - add5 : mult13 + add5;
add14 = mult12 + add15;

shf2 = key_20 ? add14 >> 4 : add14 >> 3;
out3 = add11 + shf2+key6;
