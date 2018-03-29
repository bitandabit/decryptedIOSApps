//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCStickerState, SCUserSession, SOJUSticker;
@protocol SCCachingMediaRequest;

@protocol SCStickerProtocol <NSObject, NSCoding, NSCopying>
- (NSString *)shortLoggingNameWithGeoStickerId;
- (NSString *)shortLoggingName;
- (NSDictionary *)loggingParamtersWithGeoStickerId;
- (NSDictionary *)loggingParamters;
- (NSString *)stickerId;
- (NSString *)packId;
- (unsigned long long)type;
- (SOJUSticker *)toSOJUSticker;

@optional
- (SCStickerState *)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(_Bool)arg5 trackingTrajectory:(NSArray *)arg6;
- (void)cancelImageDownloadingRequest:(SCUserSession *)arg1;
- (id <SCCachingMediaRequest>)thumbnailImageWithUserSession:(SCUserSession *)arg1 contexts:(NSArray *)arg2 completion:(void (^)(UIImage *))arg3;
- (void)imageWithUserSession:(SCUserSession *)arg1 contexts:(NSArray *)arg2 isDecoded:(_Bool)arg3 completion:(void (^)(UIImage *))arg4;
- (NSDictionary *)config;
- (NSString *)text;
@end
