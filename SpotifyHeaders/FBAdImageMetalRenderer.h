//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdImageRenderer.h"
#import "MTKViewDelegate.h"

@class CIContext, CIImage, MTKView, NSString, UIView;

@interface FBAdImageMetalRenderer : NSObject <MTKViewDelegate, FBAdImageRenderer>
{
    CIContext *_ciContext;
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    MTKView *_mtkView;
    CIImage *_ciImage;
}

+ (void)initialize;
@property(retain, nonatomic) CIImage *ciImage; // @synthesize ciImage=_ciImage;
@property(retain, nonatomic) MTKView *mtkView; // @synthesize mtkView=_mtkView;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
- (void).cxx_destruct;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
@property(readonly, nonatomic) UIView *imageView;
- (void)renderCIImage:(id)arg1;
- (id)init;
- (id)initWithMTLDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

