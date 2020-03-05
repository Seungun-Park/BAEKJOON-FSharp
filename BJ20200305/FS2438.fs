open System
open System.Text
let outputStr = new StringBuilder()
for i in 1 .. (Console.ReadLine() |> int) do
    for _ in 1 .. i do
        outputStr.Append("*") |> ignore
    outputStr.Append("\n") |> ignore
Console.Write outputStr