open System
open System.Text
let outputStr = new StringBuilder()
for i in 1 .. (Console.ReadLine() |> int) do
    outputStr.AppendLine(i.ToString()) |> ignore
Console.Write outputStr