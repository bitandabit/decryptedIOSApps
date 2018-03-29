//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPSImage, UIImage;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLLibrary;

@protocol BaseCraftMetalModel <NSObject>
@property(nonatomic) __weak id <MTLLibrary> library;
@property(nonatomic) __weak id <MTLCommandQueue> queue;
@property(nonatomic) __weak id <MTLDevice> device;
- (void)forwardWithCommandBuffer:(id <MTLCommandBuffer>)arg1 inputImage:(MPSImage *)arg2 outputImage:(MPSImage *)arg3;
- (UIImage *)forwardWithCommandBufferUIImage:(id <MTLCommandBuffer>)arg1 inputImage:(UIImage *)arg2 device:(id <MTLDevice>)arg3;
@end
