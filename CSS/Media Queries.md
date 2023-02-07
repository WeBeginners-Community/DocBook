# **INTRODUCTION:**


Introduced in CSS2, the @media rule made it possible to define various style rules for different media types. Except for print media, these media formats sadly never received much support from gadgets.

CSS3's media queries expanded on the concept of media types introduced in CSS2 by looking at a device's capabilities rather than its type. It uses the @media rule to include a block of CSS properties if and only if a certain condition is true. For example: - The background color will be changed to light blue if the browser window is 600px or smaller

![image](https://user-images.githubusercontent.com/101787864/212490018-8e6f4a41-bfd4-412b-b9ba-f8665f7436aa.png)

Media queries are used to check many things, such as:

•	Width and height of the device

•	Width and height of the viewpoint

•	Orientation (landscape or portrait mode)

•	Resolution

# **MEDIA QUERY ANATOMY:**

We have already seen an example, now let’s pick them up apart and see what actually they are doing:

![image](https://user-images.githubusercontent.com/101787864/212490096-9f591a32-092b-4610-b126-145a48e0e17e.png)

@media- first is @media which is one of many CSS at-rules. It is focused on how a site is viewed, the features that are supported by that media type, and operators that may be applied to mix and match both straightforward and complex situations.

Media types- Second are media types. Which media are we attempting to reach? Since many of the media types we're attempting to match are devices with screens attached to them, you'll frequently (if not always) see a screen value used here. More details are given below.

Media Features- We may begin specifying the features we're aiming to match once we've established the kind of material we're attempting to replicate. In a number of the examples where screen is the type and both min-width and max-width are features with certain values, screens are matched to width.

Operators- Last but not the least comes the operator. Similar to many programming languages, media queries allow us to match media types based on specific conditions. The @media rule is a logical operator that basically states, "If" the following types and features match, then do something.

•	And- We can use the ‘and’ operator if we want to target the screen within a range of widths.

![image](https://user-images.githubusercontent.com/101787864/212490123-05ac569e-252e-4fb5-8016-636f831d421f.png)

•	Or- we can also use comma-separated features as a way of using an ‘or’ operator to match different ones.

![image](https://user-images.githubusercontent.com/101787864/212490141-c7029b5c-0504-4317-aa23-1264edd74866.png)

•	Not- We use not when we want to target devices that they do ot support or match.

![image](https://user-images.githubusercontent.com/101787864/212490153-49eb4aa3-d238-4aff-a16b-b81613456049.png)

# **MEDIA TYPES IN CSS:**

Different types of media types are available in CSS. They are listed below-

•	all- it is used for all media devices

•	print- it is used for printer

•	Screen- it is used for computer screens, smartphones, etc.

•	speech- it is used for screen readers that read the screen aloud 

# **FEATURES OF MEDIA QUERY:**

Different features of media query are listed below:

•	Color- the number of bits per color component for the output device.

•	Grid- checks whether the device is grid or bitmap

•	Height- viewpoint height

•	Color-index: the number of colors the device can display

•	Max-resolution: the maximum resolution of the device using dpi and dpcm.

•	Aspect ratio- the ratio between width and height of the viewpoint

•	Monochrome: the number of bits per color on a monochrome device.

# **SUPPORTED BROWSERS:**

CSS media query are supported by:

•	Chrome 21.0 and above

•	Mozilla 3.5 and above

•	Microsoft Edge 12.0

•	Opera 9.0 and above

•	Internet Explorer 9.0 and above

•	Safari 4.0 and above
