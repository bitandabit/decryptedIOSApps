//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSOperation, UIImage;
@protocol DOCThumbnailListener;

@protocol DOCThumbnail <NSObject>
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)addListener:(id <DOCThumbnailListener>)arg1;
@property(nonatomic, readonly) NSOperation *operation;
@property(nonatomic, readonly) UIImage *thumbnail;
@property(nonatomic, readonly) _Bool isRepresentativeIcon;
- (_Bool)isLoading;

// Remaining properties
@property(nonatomic, readonly) _Bool loading;
@end

