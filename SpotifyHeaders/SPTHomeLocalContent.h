//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SPTHomeLocalContent : NSObject
{
    _Bool _shouldBeShown;
    long long _type;
    NSString *_uid;
    NSDictionary *_metaData;
    long long _relativeIndex;
}

@property _Bool shouldBeShown; // @synthesize shouldBeShown=_shouldBeShown;
@property long long relativeIndex; // @synthesize relativeIndex=_relativeIndex;
@property(readonly, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 forType:(long long)arg2;

@end

