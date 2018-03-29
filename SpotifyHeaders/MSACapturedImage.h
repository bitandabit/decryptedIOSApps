//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MSACapturedImage : NSObject
{
    unsigned int _capturedBitmapInfo;
    NSData *_imageData;
    unsigned long long _bytesPerPixel;
    unsigned long long _bytesPerRow;
    unsigned long long _imageHash;
    struct CGSize _size;
}

+ (id)createFromCGImage:(struct CGImage *)arg1;
+ (id)createFromCGBitmapContext:(struct CGContext *)arg1 withUnderlyingData:(void *)arg2 hash:(unsigned long long)arg3;
@property(readonly) unsigned long long imageHash; // @synthesize imageHash=_imageHash;
@property(readonly, nonatomic) unsigned int capturedBitmapInfo; // @synthesize capturedBitmapInfo=_capturedBitmapInfo;
@property(readonly, nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(readonly, nonatomic) unsigned long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize)arg1 imageData:(id)arg2 bytesPerPixel:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 hash:(unsigned long long)arg6;
- (id)init;

@end
