open System
let N = Console.ReadLine() |> int
for i in 1 .. 9 do
    printfn "%A * %A = %A" N i (N*i)
