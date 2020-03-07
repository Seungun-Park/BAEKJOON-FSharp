open System
open System.Text

let outputStr = StringBuilder()

let score (str:char List) =
    let rec count s cons pre l =
        match l with
        | head::tail when head = 'O' -> count (s+cons) (cons+1) head tail
        | head::tail when head = 'X' -> count s 1 head tail
        | [] -> s
    count 0 1 'X' str |> string

[<EntryPoint>]
let main argv = 
    for _ in 1 .. (Console.ReadLine() |> int) do 
        Console.ReadLine()
        |> Seq.toList
        |> score
        |> outputStr.AppendLine
        |> ignore
    Console.Write outputStr
    0 