//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol BCOVSource <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSString *deliveryMethod;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)update:(void (^)(id <BCOVMutableSource>))arg1;
@end

