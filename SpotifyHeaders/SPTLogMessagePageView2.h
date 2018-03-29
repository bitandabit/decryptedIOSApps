//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePageView2 : SPTLogMessage
{
    NSString *_typeValue;
    long long _timestampValue;
    NSString *_pageValue;
    NSString *_entityUriValue;
    NSString *_navigationalRootValue;
}

+ (id)messageWithType:(id)arg1 timestamp:(long long)arg2 page:(id)arg3 entityUri:(id)arg4 navigationalRoot:(id)arg5;
@property(retain, nonatomic) NSString *navigationalRootValue; // @synthesize navigationalRootValue=_navigationalRootValue;
@property(retain, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(retain, nonatomic) NSString *pageValue; // @synthesize pageValue=_pageValue;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
@property(retain, nonatomic) NSString *typeValue; // @synthesize typeValue=_typeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
