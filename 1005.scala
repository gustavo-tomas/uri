object Main {

    def main(args: Array[String]) {

        var x = scala.io.StdIn.readDouble()
        var y = scala.io.StdIn.readDouble()
        
        x = x * 3.5 + y * 7.5
        x /= 11.0
        
        println(f"MEDIA = $x%.5f")
    }

}
