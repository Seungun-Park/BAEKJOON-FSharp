open System
let N = Console.ReadLine() |> int
for _ in 1 .. N do
    Console.ReadLine().Split()
    |> Array.map int
    |> Array.sum
    |> Console.WriteLine