//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTBundlingOffer;

@protocol SPTBundlingOfferDataSource <NSObject>
- (_Bool)hasDataAvailable;
- (void)load:(void (^)(SPTBundlingOffer *, NSError *))arg1;

@optional
- (void)clearStoredObject;
- (void)storeObject:(SPTBundlingOffer *)arg1;
@end
