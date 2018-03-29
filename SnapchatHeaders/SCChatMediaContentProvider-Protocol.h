//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCChatMediaContentProvider <NSObject>
- (_Bool)isInfiniteDuration;
- (NSString *)venueId;
- (NSString *)snapAttachmentUrl;
- (NSString *)chatIV;
- (NSString *)chatKey;
- (NSString *)chatMediaID;
- (double)duration;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (long long)mediaContentType;
- (void)uploadWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end

