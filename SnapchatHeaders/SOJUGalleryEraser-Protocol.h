//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUGalleryEraser <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *finalEraseSequence;
@property(readonly, copy, nonatomic) NSNumber *hasInpaintedImage;
@property(readonly, copy, nonatomic) NSNumber *eraserSessionCount;
@property(readonly, copy, nonatomic) NSNumber *resetCount;
@property(readonly, copy, nonatomic) NSNumber *finalEraseCount;
@property(readonly, copy, nonatomic) NSNumber *totalEraseCount;
@end
