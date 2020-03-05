open System
open System.Text
let makeStr (i:int) [|x; y|] =
    "Case #" + i.ToString() + ": " + x + " + " + y + " = " + ((x |> int) + (y |> int) |> string)
[<EntryPoint>]
let main argv =
    let outputStr = new StringBuilder()
    for i in 1 .. (Console.ReadLine() |> int) do
        (makeStr i (Console.ReadLine().Split()))
        |> outputStr.AppendLine
        |> ignore
    Console.Write outputStr
    0