open System
let num = Console.ReadLine().Split()
          |> Seq.map int
          |> Seq.item 1
let nums = Console.ReadLine().Split()
           |> Seq.map int
           |> Seq.filter (fun n -> n < num)
nums
|> Seq.map string
|> String.concat " "
|> Console.Write