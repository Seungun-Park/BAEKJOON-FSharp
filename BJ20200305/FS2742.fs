open System
open System.Text
let outputStr = new StringBuilder()
for i = (Console.ReadLine() |> int) downto 1 do
    outputStr.AppendLine(i.ToString()) |> ignore
Console.Write outputStr