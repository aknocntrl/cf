<h2><a href="https://codeforces.com/contest/2094/problem/A" target="_blank" rel="noopener noreferrer">2094A — Trippi Troppi</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2094A](https://codeforces.com/contest/2094/problem/A) |

## Topics
`strings`

---

## Problem Statement

<div class="header"><div class="title">A. Trippi Troppi</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Trippi Troppi resides in a strange world. The ancient name of each country consists of three strings. The first letter of each string is concatenated to form the country's modern name. </p><p>Given the country's ancient name, please output the modern name.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-1"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-2">t</span></span></span>$t$ – the number of independent test cases (<span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-3"><span class="MJXp-mn" id="MJXp-Span-4">1</span><span class="MJXp-mo" id="MJXp-Span-5" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-6">t</span><span class="MJXp-mo" id="MJXp-Span-7" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mn" id="MJXp-Span-8">100</span></span></span>$1 \leq t \leq 100$).</p><p>The following <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-9"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-10">t</span></span></span>$t$ lines each contain three space-separated strings. Each string has a length of no more than <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-11"><span class="MJXp-mn" id="MJXp-Span-12">10</span></span></span>$10$, and contains only lowercase Latin characters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the string formed by concatenating the first letter of each word.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016214370523112476" id="id004905949939249643" class="input-output-copier">Copy</div></div><pre id="id0016214370523112476"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">united states america</div><div class="test-example-line test-example-line-even test-example-line-2">oh my god</div><div class="test-example-line test-example-line-odd test-example-line-3">i cant lie</div><div class="test-example-line test-example-line-even test-example-line-4">binary indexed tree</div><div class="test-example-line test-example-line-odd test-example-line-5">believe in yourself</div><div class="test-example-line test-example-line-even test-example-line-6">skibidi slay sigma</div><div class="test-example-line test-example-line-odd test-example-line-7">god bless america</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006530915131506079" id="id0011498976691956264" class="input-output-copier">Copy</div></div><pre id="id006530915131506079">usa
omg
icl
bit
biy
sss
gba
</pre></div></div></div>