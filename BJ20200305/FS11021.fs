open System
open System.Text
let outputStr = new StringBuilder()
let sum (str:string) =
    match str.Split ' ' with
    | [|x; y|] -> (x |> int) + (y |> int)
let makeStr (i:int) (s:int)=
    outputStr.AppendLine("Case #" + i.ToString() + ": " + s.ToString())
[<EntryPoint>]
let main argv =
    for i in 1 .. (Console.ReadLine() |> int) do
        makeStr i (sum (Console.ReadLine())) |> ignore
    Console.Write outputStr
    0