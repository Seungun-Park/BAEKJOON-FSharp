open System
open System.Text
let outputStr = new StringBuilder()
let mutable tf = true
while tf do
    let test = Console.ReadLine()
    if test = null then
        tf <- false
    else
        let arr = test.Split ' '
        (arr.[0] |> int) + (arr.[1] |> int) |> string |> outputStr.AppendLine |> ignore
Console.Write outputStr