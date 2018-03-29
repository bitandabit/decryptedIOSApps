//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class UIImage;

@interface AFImageRequestOperation : AFHTTPRequestOperation
{
    _Bool _automaticallyInflatesResponseImage;
    UIImage *_responseImage;
    double _imageScale;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)imageRequestOperationWithRequest:(id)arg1 imageProcessingBlock:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)imageRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool automaticallyInflatesResponseImage; // @synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(retain, nonatomic) UIImage *responseImage; // @synthesize responseImage=_responseImage;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

@end

