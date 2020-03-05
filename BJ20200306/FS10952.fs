open System
open System.Text
let outputStr = new StringBuilder()
let mutable tf = true
while tf do
    let arr = Console.ReadLine().Split ' '
    if arr = [|"0"; "0"|] then
        tf <- false
    else
        (arr.[0] |> int) + (arr.[1] |> int) |> string |> outputStr.AppendLine |> ignore
Console.Write outputStr