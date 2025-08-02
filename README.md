<h1>🎓 Physics Group Assignment — 1</h1>
  <p><strong>📚 Section:</strong> C<br/>
     <strong>👥 Group:</strong> 11<br/>

  <h2>👨‍👩‍👧‍👦 Group Members</h2>
  <table>
    <tr><th>Name</th><th>Student ID</th></tr>
    <tr><td>Dibarnita Paul</td><td>251-115-108</td></tr>
    <tr><td> Lubatujjannat Shapla</td><td>251-115-138</td></tr>
    <tr><td>Rituporna Das</td><td>251-115-148</td></tr>
    <tr><td>Jahwaya shamim prity</td><td>251-115-142</td></tr>
  </table>


  <h2>🔬 Problem #1: The Order Indicator (Double Slit Diffraction)</h2>

  <p>This part calculates the <strong>order of maxima</strong> <code>m</code> using the formula:</p>
  <pre>m = (d × sin(θ)) / λ</pre>

  <h3>✅ Features:</h3>
  <ul>
    <li>Accepts wavelength (<code>λ</code>) in nanometers (nm) and slit distance (<code>d</code>) in micrometers (μm).</li>
    <li>Validates that <code>λ</code> is between 380–750 nm.</li>
    <li>Prints the <strong>m-th order maxima</strong>.</li>
    <li>Identifies color based on wavelength:
      <ul>
        <li>Violet: 380–450 nm</li>
        <li>Blue: 450–485 nm</li>
        <li>Cyan: 485–500 nm</li>
        <li>Green: 500–565 nm</li>
        <li>Yellow: 565–590 nm</li>
        <li>Orange: 590–625 nm</li>
        <li>Red: 625–750 nm</li>
      </ul>
    </li>
    <li>If out of range: displays <code>Out of the range. Please enter a valid number.</code></li>
  </ul>

  <hr>

  <h2>🔎 Problem #2: First Diffraction Minimum in Single Slit</h2>

  <p>This part calculates the ratio <code>a/λ</code> where <code>a</code> is the slit width, using:</p>
  <pre>a × sin(θ) = λ → a/λ = 1 / sin(θ)</pre>

  <h3>✅ Features:</h3>
  <ul>
    <li>Computes and prints <code>Ratio of slit width to wavelength</code>.</li>
    <li>Uses θ = 45° by default.</li>
  </ul>

  <hr>

  <h2>📥 Input Format</h2>
  <ul>
    <li><strong>λ</strong> — Wavelength (in nm)</li>
    <li><strong>d</strong> — Slit separation (in μm)</li>
    <li><strong>θ</strong> — Angle (in degrees)</li>
  </ul>

  <h2>🧾 Output Format</h2>

  <h4>For Problem #1:</h4>
  <pre>
Wavelength: 500 nm
Slit distance = 0.8 µm, 
Angle = 45°
m-th order maxima: 1
  </pre>

  <h4>For Problem #2:</h4>
  <pre>
Angle θ = 45°  
Ratio of slit width to wavelength: a/λ = 1.41
  </pre>

  <div class="note">
    <strong>Note:</strong> λ is converted from nm to meters (×10⁻⁹) and d from μm to meters (×10⁻⁶).
  </div>
