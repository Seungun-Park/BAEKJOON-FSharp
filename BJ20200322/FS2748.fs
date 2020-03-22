open System
let rec fibo n x (pre1 : uint64) (pre2 : uint64) =
    if n = x then pre1 + pre2
    else fibo n (x + 1) pre2 (pre1 + pre2)
[<EntryPoint>]
let main argv = 
    Console.ReadLine() |> int
    |> fun x ->
        if x = 0 then 0 |> uint64
        else if x = 1 then 1 |> uint64
        else fibo x 2 (0 |> uint64) (1 |> uint64)
    |> Console.Write
    0