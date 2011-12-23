/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSymbolOwnerCache : NSObject  {
}

+ (void)flush;
+ (void)initialize;
+ (unsigned int)memoryLimit;
+ (void)setMemoryLimit:(unsigned int)arg1;
+ (void)shrinkCacheToSize:(unsigned long long)arg1;
+ (id)symbolOwnerForSignature:(id)arg1;
+ (void)addSymbolOwner:(id)arg1;
+ (id)symbolOwners;
+ (void)removeSignature:(id)arg1;


@end