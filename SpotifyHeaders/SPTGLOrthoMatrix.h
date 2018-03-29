//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTGLOrthoMatrix : NSObject
{
    float _width;
    float _height;
    float _base;
    int _widthPixels;
    int _heightPixels;
    union _GLKMatrix4 _matrix;
}

@property(nonatomic) int heightPixels; // @synthesize heightPixels=_heightPixels;
@property(nonatomic) int widthPixels; // @synthesize widthPixels=_widthPixels;
@property(nonatomic) union _GLKMatrix4 matrix; // @synthesize matrix=_matrix;
@property(nonatomic) float base; // @synthesize base=_base;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)initWithWidthPixels:(int)arg1 heightPixels:(int)arg2;

@end

