<?php

/**
 * This doc comment ends in a dot, but has some white space after it. 
 */

/**
 *  Separate different-type sections by a blank line.
 *
 * @param string $param
 *   Something incredibly useful.
 * @return bool
 *   Returns FALSE.
 * @throws Exception
 *   Thrown when $param is TRUE.
 * @ingroup sniffer
 * @deprecated
 * @see some_function()
 * @todo Fix coding standards.
 */
function test7($param) {
  if ($param) {
    throw new Exception();
  }
  return FALSE;
}

/**
 *No space before the short description.
 */
function test8() {

}

/**
 * starting lower case and no dot at the end
 */
function test9() {

}

/**
 * Short description ok.
 *
 * long description starting lower case.
 */
function test10() {

}

class Test {

  /**
   * No newline between tag groups.
   *
   * @see some_function()
   * @todo Fix coding standards.
   */
  public function test() {
  }
}