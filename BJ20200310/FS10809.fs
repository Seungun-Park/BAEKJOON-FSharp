open System
let s = Console.ReadLine() |> Seq.toList
[for i in 'a' .. 'z' do yield (try s |> List.findIndex (fun x -> x = i) with _ -> -1)]
|> List.map string
|> String.concat " "
|> Console.Write