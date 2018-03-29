//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GCKMediaTrack : NSObject <NSCopying>
{
    long long _identifier;
    NSString *_contentIdentifier;
    NSString *_contentType;
    long long _type;
    long long _textSubtype;
    NSString *_name;
    NSString *_languageCode;
    id _customData;
}

@property(readonly, nonatomic) id customData; // @synthesize customData=_customData;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long textSubtype; // @synthesize textSubtype=_textSubtype;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(long long)arg1 contentIdentifier:(id)arg2 contentType:(id)arg3 type:(long long)arg4 textSubtype:(long long)arg5 name:(id)arg6 languageCode:(id)arg7 customData:(id)arg8;

@end

