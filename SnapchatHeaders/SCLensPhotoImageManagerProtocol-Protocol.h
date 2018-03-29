//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SCLensPhotoImageManagerProtocol <NSObject>
- (void)cancelImageLoadingWithId:(NSString *)arg1;
- (NSString *)getOriginalImageAtIndex:(unsigned long long)arg1 completion:(void (^)(UIImage *, NSString *, NSString *, NSError *))arg2;
- (NSString *)getThumbnailImageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 completion:(void (^)(UIImage *, NSString *, NSString *, NSError *))arg3;
- (NSString *)imageIdentifierForItemAtIndex:(unsigned long long)arg1;
- (NSArray *)imageIdentifiers;
- (unsigned long long)imageCount;
- (long long)status;
- (void)reloadAssetsIndexWithCompletion:(void (^)(NSArray *, long long))arg1;
@end

