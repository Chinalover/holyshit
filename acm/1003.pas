program acm1003;
var n,i:integer;
	fib:array[0..50] of longint;
begin
	readln(n);
	fib[1]:=1;fib[2]:=1;
	for i:=3 to 41 do
		fib[i]:=fib[i-1]+fib[i-2];  
	writeln(fib[n]);
end.