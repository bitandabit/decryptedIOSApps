//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SCNetworkActivity : NSObject
{
    NSDictionary *_requestDictionary;
    NSDictionary *_responseDictionary;
    NSString *_requestId;
}

@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) NSDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
- (void).cxx_destruct;
- (id)toDictionary;

@end

