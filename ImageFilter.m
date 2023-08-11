
% read the original image
I = imread('TrafficLight.jpg');

% call createMask function to get the mask and the filtered image
[BW,maskedRGBImage] = createMask(I);

% plot the original image and filtered image
subplot(1,3,1);imshow(I);title('Original Image');
subplot(1,3,3);imshow(maskedRGBImage);title('Filtered Image');

function [BW,maskedRGBImage] = createMask(RGB) 
    I = rgb2hsv(RGB);

    %this is where we have the color selection (this range is for red)
    channel1Min = 0.970;
    channel1Max = 0.138;
    
    %this is for saturation so the more vibrant the color is
    channel2Min = 0.000;
    channel2Max = 1.000;
    
    %this is the brightness
    channel3Min = 0.800;
    channel3Max = 1.000;
    
    BW = ( (I(:,:,1) >= channel1Min) | (I(:,:,1) <= channel1Max) ) & ...
        (I(:,:,2) >= channel2Min ) & (I(:,:,2) <= channel2Max) & ...
        (I(:,:,3) >= channel3Min ) & (I(:,:,3) <= channel3Max);
    maskedRGBImage = RGB;
    maskedRGBImage(repmat(~BW,[1 1 3])) = 0;
end
