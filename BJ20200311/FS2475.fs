open System
Console.ReadLine().Split()
|> Array.map int
|> Array.map (fun x -> x*x)
|> Array.sum
|> fun x -> x%10
|> Console.Write