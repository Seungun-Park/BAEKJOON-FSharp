open System
let aver inp =
    let arr = inp |> Array.tail |> Array.map float
    let avg = Array.average arr
    let student = Array.filter (fun x -> x > avg) arr |> Array.length
    (student |> float) / (arr.Length |> float) * 100.0

[<EntryPoint>]
let main argv = 
    [for _ in 1 .. (Console.ReadLine() |> int) do yield (Console.ReadLine().Split ' ' |> aver)]
    |> List.map (sprintf "%.3f%%")
    |> String.concat "\n"
    |> Console.Write
    0
