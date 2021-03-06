//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInterfaceOrientationChange1 : SPTLogMessage
{
    NSString *_pageIdentifierValue;
    NSString *_entityUriValue;
    NSString *_orientationValue;
}

+ (id)messageWithPageIdentifier:(id)arg1 entityUri:(id)arg2 orientation:(id)arg3;
@property(retain, nonatomic) NSString *orientationValue; // @synthesize orientationValue=_orientationValue;
@property(retain, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(retain, nonatomic) NSString *pageIdentifierValue; // @synthesize pageIdentifierValue=_pageIdentifierValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

