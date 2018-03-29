//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GCKPB_PBArray, NSString;

@interface GCKPB_PBDescriptor : NSObject <NSCopying>
{
    GCKPB_PBArray *fields_;
    Class messageClass_;
    GCKPB_PBArray *enums_;
    GCKPB_PBArray *extensions_;
    unsigned long long storageSize_;
    _Bool wireFormat_;
    GCKPB_PBArray *extensionRanges_;
}

+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 fields:(struct GCKPB_PBMessageFieldDescription *)arg3 fieldCount:(unsigned long long)arg4 enums:(struct GCKPB_PBMessageEnumDescription *)arg5 enumCount:(unsigned long long)arg6 ranges:(struct GCKPB_PBMessageExtensionRangeDescription *)arg7 rangeCount:(unsigned long long)arg8 storageSize:(unsigned long long)arg9 wireFormat:(_Bool)arg10 extraTextFormatInfo:(const char *)arg11;
+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 fields:(struct GCKPB_PBMessageFieldDescription *)arg3 fieldCount:(unsigned long long)arg4 enums:(struct GCKPB_PBMessageEnumDescription *)arg5 enumCount:(unsigned long long)arg6 ranges:(struct GCKPB_PBMessageExtensionRangeDescription *)arg7 rangeCount:(unsigned long long)arg8 storageSize:(unsigned long long)arg9 wireFormat:(_Bool)arg10;
@property(readonly, nonatomic, getter=isWireFormat) _Bool wireFormat; // @synthesize wireFormat=wireFormat_;
@property(readonly, nonatomic) unsigned long long storageSize; // @synthesize storageSize=storageSize_;
@property(readonly, retain, nonatomic) GCKPB_PBArray *extensionRanges; // @synthesize extensionRanges=extensionRanges_;
@property(readonly, retain, nonatomic) GCKPB_PBArray *extensions; // @synthesize extensions=extensions_;
@property(readonly, retain, nonatomic) GCKPB_PBArray *enums; // @synthesize enums=enums_;
@property(readonly, retain, nonatomic) GCKPB_PBArray *fields; // @synthesize fields=fields_;
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=messageClass_;
- (id)extensionWithName:(id)arg1;
- (id)extensionWithNumber:(unsigned int)arg1;
- (id)enumWithName:(id)arg1;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 fields:(id)arg2 enums:(id)arg3 extensions:(id)arg4 extensionRanges:(id)arg5 storageSize:(unsigned long long)arg6 wireFormat:(_Bool)arg7;

@end

