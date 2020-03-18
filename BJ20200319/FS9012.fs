open System
let rec VPS c s =
    match s with
    | head::tail when head = '(' -> VPS (c + 1) tail
    | head::tail when head = ')' && c > 0 -> VPS (c - 1) tail
    | head::tail -> "NO"
    | [] when c = 0 -> "YES"
    | [] -> "NO"
[<EntryPoint>]
let main argv = 
    [for _ in 1 .. (Console.ReadLine() |> int) do yield Console.ReadLine() |> Seq.toList |> VPS 0]
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0