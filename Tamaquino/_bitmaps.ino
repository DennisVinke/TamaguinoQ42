// All bitmap storage related stuff

// front grass 32x10
const unsigned char grass_front [] PROGMEM = {
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x08, 0x89, 0xc0, 0x48, 0x5c, 0x50, 0x84, 
0x9c, 0x48, 0x50, 0x22, 0x88, 0x80, 0x44, 0x22, 0x40, 0x84, 0x2e, 0x21, 0x49, 0x24, 0xa4, 0xb1, 
};
//grass 2 (dino walking on) 4x8
const unsigned char grass [] PROGMEM = {
0xff, 0xee, 0xbb, 0x55, 0xaa, 0x11, 
};

//trees
const unsigned char trees [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x10, 0x05, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x15, 0x00, 
0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x55, 0x40, 0x00, 0x55, 0x40, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x15, 0x04, 0x40, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x02, 0xa0, 0x00, 0x00, 0x01, 0x10, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
0x00, 0x28, 0x84, 0x24, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x40, 0x00, 0x82, 0x00, 
0x00, 0x01, 0x10, 0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 
0x41, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x40, 0x00, 0x88, 0x82, 0x40, 0x91, 0x04, 0x24, 
0x41, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x44, 0x44, 0x11, 0x04, 0x10, 0x11, 0x04, 0x01, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x10, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x04, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x20, 0x00, 0x01, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
};

const unsigned char mountains [] PROGMEM = {
0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 
0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
0x03, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
0x07, 0x74, 0x07, 0x80, 0x10, 0x00, 0x00, 0x80, 0x00, 0x06, 0x80, 0x00, 0x00, 0x00, 0x00, 0xd5, 
0x0e, 0xc2, 0x0d, 0xc0, 0x28, 0x01, 0x01, 0xc1, 0x00, 0x1f, 0x40, 0x00, 0x00, 0x00, 0x01, 0x28, 
0x1d, 0x13, 0x1b, 0x60, 0x54, 0x03, 0x83, 0xa3, 0x80, 0x36, 0x20, 0x00, 0x00, 0x00, 0x06, 0xd0, 
0x3a, 0x41, 0xb4, 0x30, 0xe2, 0xcc, 0xf7, 0x57, 0xc0, 0xd8, 0x10, 0x00, 0x00, 0x00, 0x19, 0x20, 
0x68, 0x84, 0x49, 0x19, 0xa1, 0x36, 0x5d, 0x2a, 0xa1, 0xa0, 0x10, 0x00, 0x00, 0x00, 0xe6, 0x40, 
0xd2, 0x10, 0xa4, 0x0c, 0x80, 0x8c, 0x1a, 0x15, 0x57, 0x40, 0x88, 0x00, 0x00, 0x1f, 0x38, 0x80, 
0x49, 0x08, 0x00, 0x06, 0x02, 0xc0, 0x24, 0x18, 0x0b, 0x80, 0x05, 0x0b, 0x8c, 0xe0, 0x23, 0x00, 
0xa0, 0x20, 0x00, 0x11, 0x00, 0x00, 0x48, 0x84, 0x84, 0x02, 0x20, 0x5d, 0xf3, 0x00, 0xcd, 0xc0, 
0x50, 0x00, 0x04, 0x04, 0x01, 0x44, 0x00, 0x00, 0x08, 0x00, 0x00, 0x30, 0x04, 0x07, 0x10, 0x20, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x40, 0x00, 0x10, 
0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x01, 0x11, 0x01, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x20, 0x02, 
};


const unsigned char cloud2 [] PROGMEM = {
0x04, 0x70, 0x18, 0x00, 0x6e, 0xfb, 0x7c, 0xee, 0xff, 0xff, 0xfd, 0xff, 0x6f, 0xfb, 0x38, 0xee, 
0x07, 0x70, 0x52, 0x00, 
};

// walking sprites
// walk right
const unsigned char dinoWalk0 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x60, 0x00, 
0x00, 0x00, 0x1f, 0xf1, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xb8, 0x00, 0x00, 0x00, 0x7b, 0xff, 
0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xd8, 0x00, 0x00, 0x03, 0xff, 0x7f, 0xe0, 0x00, 0x00, 0x0f, 
0xf7, 0xde, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x3c, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x7a, 0x00, 0x00,
};
const unsigned char dinoWalk1 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x60, 0x00, 
0x00, 0x00, 0x1f, 0xf1, 0xf0, 0x00, 0x00, 0x00, 0x37, 0xff, 0xb8, 0x00, 0x00, 0x00, 0x7f, 0xff, 
0xfc, 0x00, 0x00, 0x00, 0xff, 0x7f, 0xd8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x0f, 
0xbf, 0xda, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x18, 0x00, 0x00, 
};
const unsigned char dinoWalk2 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x60, 0x00, 
0x00, 0x00, 0x1b, 0xf1, 0xf0, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xb8, 0x00, 0x00, 0x00, 0x7f, 0x7f, 
0xfc, 0x00, 0x00, 0x00, 0xff, 0xff, 0xd8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x0f, 
0xbf, 0xfa, 0x00, 0x00, 0x00, 0x7f, 0x78, 0x3c, 0x00, 0x00, 0x00, 0x00, 0xf4, 0x5e, 0x00, 0x00,
};
// walk left
const unsigned char dinoWalk3 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0xe0, 0x00, 0x00, 
0x00, 0x0f, 0x8f, 0xf8, 0x00, 0x00, 0x00, 0x1d, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xde, 
0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xfe, 0xff, 0xc0, 0x00, 0x00, 0x00, 
0x7b, 0xef, 0xf0, 0x00, 0x00, 0x00, 0x3c, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x5e, 0x3d, 0x00, 0x00,  
};
const unsigned char dinoWalk4 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0xe0, 0x00, 0x00, 
0x00, 0x0f, 0x8f, 0xf8, 0x00, 0x00, 0x00, 0x1d, 0xff, 0xec, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfe, 
0x00, 0x00, 0x00, 0x1b, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
0x5b, 0xfd, 0xf0, 0x00, 0x00, 0x00, 0x3c, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x18, 0x0c, 0x00, 0x00, 
};
const unsigned char dinoWalk5 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0xe0, 0x00, 0x00, 
0x00, 0x0f, 0x8f, 0xd8, 0x00, 0x00, 0x00, 0x1d, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0xfe, 
0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
0x5f, 0xfd, 0xf0, 0x00, 0x00, 0x00, 0x3c, 0x1e, 0xfe, 0x00, 0x00, 0x00, 0x7a, 0x2f, 0x00, 0x00,
};

// Number of frames in the walking animation
#define WALKSIZE 6

const unsigned char* dinoWalk[WALKSIZE] = {
  dinoWalk0,dinoWalk1,dinoWalk2,
  dinoWalk3,dinoWalk4,dinoWalk5
};

const unsigned char poop [] PROGMEM = {
0x80, 0x88, 0x01, 0x81, 0x02, 0xe0, 0x27, 0x10, 0x0b, 0xf0, 0x1c, 0x08, 
};

// EATING

const unsigned char eating1 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 
0x00, 0x03, 0x7c, 0x7f, 0xfe, 0x00, 0x00, 0x02, 0xf9, 0xff, 0xfe, 0x00, 0x00, 0x0c, 0xf3, 0xff, 
0xff, 0x00, 0x00, 0x1f, 0xf4, 0x7f, 0xff, 0x80, 0x00, 0x7f, 0xf0, 0x7f, 0xff, 0xc0, 0x00, 0xff, 
0xf8, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x1f, 0xe7, 0xff, 0xe0, 0xff, 0xe0, 0x3f, 0xdf, 0xff, 0xde, 0xff, 0xf0, 0x7f, 0xbf, 0xff, 0xbf, 
0x7f, 0xf0, 0x7f, 0x7f, 0xfe, 0x77, 0xbf, 0xf8, 0x7f, 0x7f, 0xf9, 0xf7, 0xbf, 0xfc, 0x3f, 0xff, 
0xe7, 0xef, 0xbf, 0xfe, 0x5f, 0xfe, 0x1f, 0x1f, 0xbf, 0xff, 0x67, 0xf1, 0xf9, 0x1f, 0xbf, 0xff, 
0x38, 0x0f, 0xe8, 0x3f, 0xbf, 0xff, 0x1f, 0xff, 0xe0, 0x3f, 0xbf, 0xff, 0x0e, 0xfe, 0x40, 0xbf, 
0x6f, 0xff, 0x04, 0x54, 0x00, 0xff, 0x57, 0xff, 0x00, 0x10, 0x01, 0xfe, 0xab, 0xff, 0x00, 0x18, 
0x01, 0xfd, 0x55, 0xff, 0x00, 0x18, 0x05, 0xfa, 0xaa, 0xff, 0x00, 0x1d, 0x27, 0xf1, 0x55, 0x5f, 
0x00, 0x0f, 0x7f, 0xe0, 0xaa, 0xaf, 0x00, 0x07, 0xff, 0x80, 0x55, 0x57, 0x00, 0x03, 0xfe, 0x00, 
0x2a, 0xab, 0x00, 0x01, 0xf0, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 
0x00, 0x00, 0x05, 0x55, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 

};
const unsigned char eating2 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 
0x00, 0x03, 0x7c, 0x7f, 0xfe, 0x00, 0x00, 0x02, 0xf9, 0xff, 0xfe, 0x00, 0x00, 0x0c, 0xf3, 0xff, 
0xff, 0x00, 0x00, 0x1f, 0xf4, 0x7f, 0xff, 0x80, 0x00, 0x7f, 0xf0, 0x7f, 0xff, 0xc0, 0x00, 0xff, 
0xf8, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x1f, 0xe7, 0xff, 0xe0, 0xff, 0xe0, 0x3f, 0xdf, 0xff, 0xde, 0xff, 0xf0, 0x7f, 0xbf, 0xff, 0xbf, 
0x7f, 0xf0, 0x7f, 0x7f, 0xfe, 0x77, 0xbf, 0xf8, 0x7f, 0x7f, 0xf9, 0xf7, 0xbf, 0xfc, 0x3f, 0xff, 
0xe7, 0xef, 0xbf, 0xfe, 0x5f, 0xfe, 0x1f, 0x1f, 0xbf, 0xff, 0x67, 0xf1, 0xf9, 0x1f, 0xbf, 0xff, 
0x38, 0x0f, 0xe8, 0x3f, 0xbf, 0xff, 0x1f, 0xff, 0xe1, 0x7f, 0x3f, 0xff, 0x0e, 0xfe, 0x41, 0xfe, 
0xef, 0xff, 0x04, 0xd4, 0x0b, 0xfd, 0x57, 0xff, 0x00, 0xd4, 0x0f, 0xfa, 0xab, 0xff, 0x00, 0x60, 
0x9f, 0xf5, 0x55, 0xff, 0x00, 0x75, 0xff, 0xca, 0xaa, 0xff, 0x00, 0x3f, 0xff, 0x05, 0x55, 0x5f, 
0x00, 0x1f, 0xfc, 0x02, 0xaa, 0xaf, 0x00, 0x07, 0xc0, 0x01, 0x55, 0x57, 0x00, 0x00, 0x00, 0x00, 
0xaa, 0xab, 0x00, 0x00, 0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 
0x00, 0x00, 0x05, 0x55, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 
 
};
const unsigned char eating3 [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
0x7f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x00, 
0x00, 0x03, 0x7c, 0x7f, 0xfe, 0x00, 0x00, 0x02, 0xf9, 0xff, 0xfe, 0x00, 0x00, 0x0c, 0xf3, 0xff, 
0xff, 0x00, 0x00, 0x1f, 0xf4, 0x7f, 0xff, 0x80, 0x00, 0x7f, 0xf0, 0x7f, 0xff, 0xc0, 0x00, 0xff, 
0xf8, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 
0x1f, 0xe7, 0xff, 0xe0, 0xff, 0xe0, 0x3f, 0xdf, 0xff, 0xde, 0xff, 0xf0, 0x7f, 0xbf, 0xff, 0xbf, 
0x7f, 0xf0, 0x7f, 0x7f, 0xfe, 0x77, 0xbf, 0xf8, 0x7f, 0x7f, 0xf9, 0xf7, 0xbf, 0xfc, 0x3f, 0xff, 
0xe7, 0xef, 0xbf, 0xfe, 0x5f, 0xfe, 0x1f, 0xdf, 0xbf, 0xff, 0x67, 0xf1, 0xff, 0x3f, 0xbf, 0xff, 
0x38, 0x0f, 0xfc, 0xff, 0xbf, 0xff, 0x1f, 0xff, 0xf3, 0xff, 0x3f, 0xff, 0x0f, 0xff, 0xcf, 0xfe, 
0xef, 0xff, 0x00, 0x38, 0x3f, 0xf9, 0x57, 0xff, 0x07, 0x83, 0xff, 0xea, 0xab, 0xff, 0x01, 0xff, 
0xfe, 0x15, 0x55, 0xff, 0x00, 0xff, 0xf0, 0x0a, 0xaa, 0xff, 0x00, 0x3f, 0xc0, 0x05, 0x55, 0x5f, 
0x00, 0x00, 0x00, 0x02, 0xaa, 0xaf, 0x00, 0x00, 0x00, 0x05, 0x55, 0x57, 0x00, 0x00, 0x00, 0x02, 
0xaa, 0xab, 0x00, 0x00, 0x00, 0x01, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0x00, 0x00, 
0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x01, 0x55, 

};

const unsigned char* eating[4] = {
      eating1,eating2,eating3,eating2
    };

const unsigned char apple [] PROGMEM = {
0x00, 0x01, 0xf0, 0x00, 0x07, 0xe0, 0x00, 0x0f, 0xe0, 0x3f, 0x1f, 0xc0, 0x00, 0xdf, 0x80, 0x00, 
0x20, 0x00, 0x0f, 0xd7, 0xf0, 0x3f, 0xff, 0xfc, 0x7f, 0xff, 0xfe, 0x78, 0xff, 0xfe, 0xf0, 0x7f, 
0xff, 0xe0, 0x7f, 0xff, 0xe0, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xfe, 0x7f, 0xff, 0xfe, 0x3f, 0xff, 0xfc, 0x1f, 
0xff, 0xf8, 0x0f, 0xff, 0xf0, 0x07, 0xc3, 0xe0, 
};

const unsigned char steak [] PROGMEM = {
0x0f, 0xe0, 0x00, 0x3f, 0xf8, 0x00, 0x31, 0xfe, 0x00, 0x6e, 0x7f, 0x00, 0xd1, 0x7f, 0x80, 0xa0, 
0xbf, 0x80, 0xa0, 0xbf, 0xc0, 0xa0, 0xbf, 0xc0, 0xd1, 0x3f, 0xc0, 0xae, 0xff, 0xe0, 0xd1, 0xff, 
0xe0, 0xef, 0xff, 0xe0, 0x77, 0xff, 0xf0, 0x7b, 0xff, 0xd0, 0x3d, 0xff, 0x78, 0x1e, 0xf9, 0xfe, 
0x0f, 0x67, 0xff, 0x07, 0x7f, 0xff, 0x03, 0x9f, 0xfc, 0x03, 0xc3, 0xf9, 0x01, 0xf8, 0xc3, 0x00, 
0xff, 0x1e, 0x00, 0x1f, 0xfe, 0x00, 0x01, 0xfc, 
};

int stars [6][2];