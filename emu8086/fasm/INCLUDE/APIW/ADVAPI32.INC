
; ADVAPI32 API calls (WideChar)

import advapi32,\
       AbortSystemShutdown,'AbortSystemShutdownW',\
       AccessCheck,'AccessCheck',\
       AccessCheckAndAuditAlarm,'AccessCheckAndAuditAlarmW',\
       AccessCheckByType,'AccessCheckByType',\
       AccessCheckByTypeAndAuditAlarm,'AccessCheckByTypeAndAuditAlarmW',\
       AccessCheckByTypeResultList,'AccessCheckByTypeResultList',\
       AccessCheckByTypeResultListAndAuditAlarm,'AccessCheckByTypeResultListAndAuditAlarmW',\
       AddAccessAllowedAce,'AddAccessAllowedAce',\
       AddAccessAllowedAceEx,'AddAccessAllowedAceEx',\
       AddAccessAllowedObjectAce,'AddAccessAllowedObjectAce',\
       AddAccessDeniedAce,'AddAccessDeniedAce',\
       AddAccessDeniedAceEx,'AddAccessDeniedAceEx',\
       AddAccessDeniedObjectAce,'AddAccessDeniedObjectAce',\
       AddAce,'AddAce',\
       AddAuditAccessAce,'AddAuditAccessAce',\
       AddAuditAccessAceEx,'AddAuditAccessAceEx',\
       AddAuditAccessObjectAce,'AddAuditAccessObjectAce',\
       AdjustTokenGroups,'AdjustTokenGroups',\
       AdjustTokenPrivileges,'AdjustTokenPrivileges',\
       AllocateAndInitializeSid,'AllocateAndInitializeSid',\
       AllocateLocallyUniqueId,'AllocateLocallyUniqueId',\
       AreAllAccessesGranted,'AreAllAccessesGranted',\
       AreAnyAccessesGranted,'AreAnyAccessesGranted',\
       BackupEventLog,'BackupEventLogW',\
       BuildExplicitAccessWithName,'BuildExplicitAccessWithNameW',\
       BuildImpersonateExplicitAccessWithName,'BuildImpersonateExplicitAccessWithNameW',\
       BuildImpersonateTrustee,'BuildImpersonateTrusteeW',\
       BuildSecurityDescriptor,'BuildSecurityDescriptorW',\
       BuildTrusteeWithName,'BuildTrusteeWithNameW',\
       BuildTrusteeWithSid,'BuildTrusteeWithSidW',\
       CancelOverlappedAccess,'CancelOverlappedAccess',\
       ChangeServiceConfig2,'ChangeServiceConfig2W',\
       ChangeServiceConfig,'ChangeServiceConfigW',\
       ClearEventLog,'ClearEventLogW',\
       CloseEventLog,'CloseEventLog',\
       CloseRaw,'CloseRaw',\
       CloseServiceHandle,'CloseServiceHandle',\
       ControlService,'ControlService',\
       ConvertAccessToSecurityDescriptor,'ConvertAccessToSecurityDescriptorW',\
       ConvertSecurityDescriptorToAccess,'ConvertSecurityDescriptorToAccessW',\
       ConvertSecurityDescriptorToAccessNamed,'ConvertSecurityDescriptorToAccessNamedW',\
       ConvertToAutoInheritPrivateObjectSecurity,'ConvertToAutoInheritPrivateObjectSecurity',\
       CopySid,'CopySid',\
       CreatePrivateObjectSecurity,'CreatePrivateObjectSecurity',\
       CreatePrivateObjectSecurityEx,'CreatePrivateObjectSecurityEx',\
       CreateProcessAsUser,'CreateProcessAsUserW',\
       CreateRestrictedToken,'CreateRestrictedToken',\
       CreateService,'CreateServiceW',\
       CryptAcquireContext,'CryptAcquireContextW',\
       CryptContextAddRef,'CryptContextAddRef',\
       CryptCreateHash,'CryptCreateHash',\
       CryptDecrypt,'CryptDecrypt',\
       CryptDeriveKey,'CryptDeriveKey',\
       CryptDestroyHash,'CryptDestroyHash',\
       CryptDestroyKey,'CryptDestroyKey',\
       CryptDuplicateHash,'CryptDuplicateHash',\
       CryptDuplicateKey,'CryptDuplicateKey',\
       CryptEncrypt,'CryptEncrypt',\
       CryptEnumProviderTypes,'CryptEnumProviderTypesW',\
       CryptEnumProviders,'CryptEnumProvidersW',\
       CryptExportKey,'CryptExportKey',\
       CryptGenKey,'CryptGenKey',\
       CryptGenRandom,'CryptGenRandom',\
       CryptGetDefaultProvider,'CryptGetDefaultProviderW',\
       CryptGetHashParam,'CryptGetHashParam',\
       CryptGetKeyParam,'CryptGetKeyParam',\
       CryptGetProvParam,'CryptGetProvParam',\
       CryptGetUserKey,'CryptGetUserKey',\
       CryptHashData,'CryptHashData',\
       CryptHashSessionKey,'CryptHashSessionKey',\
       CryptImportKey,'CryptImportKey',\
       CryptReleaseContext,'CryptReleaseContext',\
       CryptSetHashParam,'CryptSetHashParam',\
       CryptSetKeyParam,'CryptSetKeyParam',\
       CryptSetProvParam,'CryptSetProvParam',\
       CryptSetProvider,'CryptSetProviderW',\
       CryptSetProviderEx,'CryptSetProviderExW',\
       CryptSignHash,'CryptSignHashW',\
       CryptVerifySignature,'CryptVerifySignatureW',\
       DecryptFile,'DecryptFileW',\
       DeleteAce,'DeleteAce',\
       DeleteService,'DeleteService',\
       DeregisterEventSource,'DeregisterEventSource',\
       DestroyPrivateObjectSecurity,'DestroyPrivateObjectSecurity',\
       DuplicateToken,'DuplicateToken',\
       DuplicateTokenEx,'DuplicateTokenEx',\
       ElfBackupEventLogFile,'ElfBackupEventLogFileW',\
       ElfChangeNotify,'ElfChangeNotify',\
       ElfClearEventLogFile,'ElfClearEventLogFileW',\
       ElfCloseEventLog,'ElfCloseEventLog',\
       ElfDeregisterEventSource,'ElfDeregisterEventSource',\
       ElfNumberOfRecords,'ElfNumberOfRecords',\
       ElfOldestRecord,'ElfOldestRecord',\
       ElfOpenBackupEventLog,'ElfOpenBackupEventLogW',\
       ElfOpenEventLog,'ElfOpenEventLogW',\
       ElfReadEventLog,'ElfReadEventLogW',\
       ElfRegisterEventSource,'ElfRegisterEventSourceW',\
       ElfReportEvent,'ElfReportEventW',\
       EncryptFile,'EncryptFileW',\
       EnumDependentServices,'EnumDependentServicesW',\
       EnumServicesStatus,'EnumServicesStatusW',\
       EqualPrefixSid,'EqualPrefixSid',\
       EqualSid,'EqualSid',\
       FindFirstFreeAce,'FindFirstFreeAce',\
       FreeSid,'FreeSid',\
       GetAccessPermissionsForObject,'GetAccessPermissionsForObjectW',\
       GetAce,'GetAce',\
       GetAclInformation,'GetAclInformation',\
       GetAuditedPermissionsFromAcl,'GetAuditedPermissionsFromAclW',\
       GetCurrentHwProfile,'GetCurrentHwProfileW',\
       GetEffectiveRightsFromAcl,'GetEffectiveRightsFromAclW',\
       GetExplicitEntriesFromAcl,'GetExplicitEntriesFromAclW',\
       GetFileSecurity,'GetFileSecurityW',\
       GetKernelObjectSecurity,'GetKernelObjectSecurity',\
       GetLengthSid,'GetLengthSid',\
       GetMultipleTrustee,'GetMultipleTrusteeW',\
       GetMultipleTrusteeOperation,'GetMultipleTrusteeOperationW',\
       GetNamedSecurityInfo,'GetNamedSecurityInfoW',\
       GetNamedSecurityInfoEx,'GetNamedSecurityInfoExW',\
       GetNumberOfEventLogRecords,'GetNumberOfEventLogRecords',\
       GetOldestEventLogRecord,'GetOldestEventLogRecord',\
       GetOverlappedAccessResults,'GetOverlappedAccessResults',\
       GetPrivateObjectSecurity,'GetPrivateObjectSecurity',\
       GetSecurityDescriptorControl,'GetSecurityDescriptorControl',\
       GetSecurityDescriptorDacl,'GetSecurityDescriptorDacl',\
       GetSecurityDescriptorGroup,'GetSecurityDescriptorGroup',\
       GetSecurityDescriptorLength,'GetSecurityDescriptorLength',\
       GetSecurityDescriptorOwner,'GetSecurityDescriptorOwner',\
       GetSecurityDescriptorSacl,'GetSecurityDescriptorSacl',\
       GetSecurityInfo,'GetSecurityInfo',\
       GetSecurityInfoEx,'GetSecurityInfoExW',\
       GetServiceDisplayName,'GetServiceDisplayNameW',\
       GetServiceKeyName,'GetServiceKeyNameW',\
       GetSidLengthRequired,'GetSidLengthRequiredW',\
       GetSidSubAuthority,'GetSidSubAuthority',\
       GetSidSubAuthorityCount,'GetSidSubAuthorityCount',\
       GetTokenInformation,'GetTokenInformation',\
       GetTrusteeName,'GetTrusteeNameW',\
       GetTrusteeType,'GetTrusteeTypeW',\
       GetUserName,'GetUserNameW',\
       I_ScSetServiceBits,'I_ScSetServiceBitsW',\
       ImpersonateLoggedOnUser,'ImpersonateLoggedOnUser',\
       ImpersonateNamedPipeClient,'ImpersonateNamedPipeClient',\
       ImpersonateSelf,'ImpersonateSelf',\
       InitializeAcl,'InitializeAcl',\
       InitializeSecurityDescriptor,'InitializeSecurityDescriptor',\
       InitializeSid,'InitializeSid',\
       InitiateSystemShutdown,'InitiateSystemShutdownW',\
       IsTextUnicode,'IsTextUnicode',\
       IsTokenRestricted,'IsTokenRestricted',\
       IsValidAcl,'IsValidAcl',\
       IsValidSecurityDescriptor,'IsValidSecurityDescriptor',\
       IsValidSid,'IsValidSid',\
       LockServiceDatabase,'LockServiceDatabase',\
       LogonUser,'LogonUserW',\
       LookupAccountName,'LookupAccountNameW',\
       LookupAccountSid,'LookupAccountSidW',\
       LookupPrivilegeDisplayName,'LookupPrivilegeDisplayNameW',\
       LookupPrivilegeName,'LookupPrivilegeNameW',\
       LookupPrivilegeValue,'LookupPrivilegeValueW',\
       LookupSecurityDescriptorParts,'LookupSecurityDescriptorPartsW',\
       LsaAddAccountRights,'LsaAddAccountRights',\
       LsaAddPrivilegesToAccount,'LsaAddPrivilegesToAccount',\
       LsaClearAuditLog,'LsaClearAuditLog',\
       LsaClose,'LsaClose',\
       LsaCreateAccount,'LsaCreateAccount',\
       LsaCreateSecret,'LsaCreateSecret',\
       LsaCreateTrustedDomain,'LsaCreateTrustedDomain',\
       LsaCreateTrustedDomainEx,'LsaCreateTrustedDomainEx',\
       LsaDelete,'LsaDelete',\
       LsaDeleteTrustedDomain,'LsaDeleteTrustedDomain',\
       LsaEnumerateAccountRights,'LsaEnumerateAccountRights',\
       LsaEnumerateAccounts,'LsaEnumerateAccounts',\
       LsaEnumerateAccountsWithUserRight,'LsaEnumerateAccountsWithUserRight',\
       LsaEnumeratePrivileges,'LsaEnumeratePrivileges',\
       LsaEnumeratePrivilegesOfAccount,'LsaEnumeratePrivilegesOfAccount',\
       LsaEnumerateTrustedDomains,'LsaEnumerateTrustedDomains',\
       LsaEnumerateTrustedDomainsEx,'LsaEnumerateTrustedDomainsEx',\
       LsaFreeMemory,'LsaFreeMemory',\
       LsaGetQuotasForAccount,'LsaGetQuotasForAccount',\
       LsaGetSystemAccessAccount,'LsaGetSystemAccessAccount',\
       LsaGetUserName,'LsaGetUserName',\
       LsaICLookupNames,'LsaICLookupNames',\
       LsaICLookupSids,'LsaICLookupSids',\
       LsaIGetTrustedDomainAuthInfoBlobs,'LsaIGetTrustedDomainAuthInfoBlobs',\
       LsaISetTrustedDomainAuthInfoBlobs,'LsaISetTrustedDomainAuthInfoBlobs',\
       LsaLookupNames,'LsaLookupNames',\
       LsaLookupPrivilegeDisplayName,'LsaLookupPrivilegeDisplayName',\
       LsaLookupPrivilegeName,'LsaLookupPrivilegeName',\
       LsaLookupPrivilegeValue,'LsaLookupPrivilegeValue',\
       LsaLookupSids,'LsaLookupSids',\
       LsaNtStatusToWinError,'LsaNtStatusToWinError',\
       LsaOpenAccount,'LsaOpenAccount',\
       LsaOpenPolicy,'LsaOpenPolicy',\
       LsaOpenSecret,'LsaOpenSecret',\
       LsaOpenTrustedDomain,'LsaOpenTrustedDomain',\
       LsaQueryDomainInformationPolicy,'LsaQueryDomainInformationPolicy',\
       LsaQueryInfoTrustedDomain,'LsaQueryInfoTrustedDomain',\
       LsaQueryInformationPolicy,'LsaQueryInformationPolicy',\
       LsaQueryLocalInformationPolicy,'LsaQueryLocalInformationPolicy',\
       LsaQuerySecret,'LsaQuerySecret',\
       LsaQuerySecurityObject,'LsaQuerySecurityObject',\
       LsaQueryTrustedDomainInfo,'LsaQueryTrustedDomainInfo',\
       LsaQueryTrustedDomainInfoByName,'LsaQueryTrustedDomainInfoByName',\
       LsaRemoveAccountRights,'LsaRemoveAccountRights',\
       LsaRemovePrivilegesFromAccount,'LsaRemovePrivilegesFromAccount',\
       LsaRetrievePrivateData,'LsaRetrievePrivateData',\
       LsaSetDomainInformationPolicy,'LsaSetDomainInformationPolicy',\
       LsaSetInformationPolicy,'LsaSetInformationPolicy',\
       LsaSetInformationTrustedDomain,'LsaSetInformationTrustedDomain',\
       LsaSetLocalInformationPolicy,'LsaSetLocalInformationPolicy',\
       LsaSetQuotasForAccount,'LsaSetQuotasForAccount',\
       LsaSetSecret,'LsaSetSecret',\
       LsaSetSecurityObject,'LsaSetSecurityObject',\
       LsaSetSystemAccessAccount,'LsaSetSystemAccessAccount',\
       LsaSetTrustedDomainInfoByName,'LsaSetTrustedDomainInfoByName',\
       LsaSetTrustedDomainInformation,'LsaSetTrustedDomainInformation',\
       LsaStorePrivateData,'LsaStorePrivateData',\
       MakeAbsoluteSD,'MakeAbsoluteSD',\
       MakeSelfRelativeSD,'MakeSelfRelativeSD',\
       MapGenericMask,'MapGenericMask',\
       NotifyBootConfigStatus,'NotifyBootConfigStatus',\
       NotifyChangeEventLog,'NotifyChangeEventLog',\
       ObjectCloseAuditAlarm,'ObjectCloseAuditAlarmW',\
       ObjectDeleteAuditAlarm,'ObjectDeleteAuditAlarmW',\
       ObjectOpenAuditAlarm,'ObjectOpenAuditAlarmW',\
       ObjectPrivilegeAuditAlarm,'ObjectPrivilegeAuditAlarmW',\
       OpenBackupEventLog,'OpenBackupEventLogW',\
       OpenEventLog,'OpenEventLogW',\
       OpenProcessToken,'OpenProcessToken',\
       OpenRaw,'OpenRawW',\
       OpenSCManager,'OpenSCManagerW',\
       OpenService,'OpenServiceW',\
       OpenThreadToken,'OpenThreadToken',\
       PrivilegeCheck,'PrivilegeCheck',\
       PrivilegedServiceAuditAlarm,'PrivilegedServiceAuditAlarmW',\
       QueryRecoveryAgents,'QueryRecoveryAgentsW',\
       QueryServiceConfig2,'QueryServiceConfig2W',\
       QueryServiceConfig,'QueryServiceConfigW',\
       QueryServiceLockStatus,'QueryServiceLockStatusW',\
       QueryServiceObjectSecurity,'QueryServiceObjectSecurity',\
       QueryServiceStatus,'QueryServiceStatus',\
       QueryWindows31FilesMigration,'QueryWindows31FilesMigration',\
       ReadEventLog,'ReadEventLogW',\
       ReadRaw,'ReadRaw',\
       RegCloseKey,'RegCloseKey',\
       RegConnectRegistry,'RegConnectRegistryW',\
       RegCreateKey,'RegCreateKeyW',\
       RegCreateKeyEx,'RegCreateKeyExW',\
       RegDeleteKey,'RegDeleteKeyW',\
       RegDeleteValue,'RegDeleteValueW',\
       RegEnumKey,'RegEnumKeyW',\
       RegEnumKeyEx,'RegEnumKeyExW',\
       RegEnumValue,'RegEnumValueW',\
       RegFlushKey,'RegFlushKey',\
       RegGetKeySecurity,'RegGetKeySecurity',\
       RegLoadKey,'RegLoadKeyW',\
       RegNotifyChangeKeyValue,'RegNotifyChangeKeyValue',\
       RegOpenKey,'RegOpenKeyW',\
       RegOpenKeyEx,'RegOpenKeyExW',\
       RegOverridePredefKey,'RegOverridePredefKey',\
       RegQueryInfoKey,'RegQueryInfoKeyW',\
       RegQueryMultipleValues,'RegQueryMultipleValuesW',\
       RegQueryValue,'RegQueryValueW',\
       RegQueryValueEx,'RegQueryValueExW',\
       RegReplaceKey,'RegReplaceKeyW',\
       RegRestoreKey,'RegRestoreKeyW',\
       RegSaveKey,'RegSaveKeyW',\
       RegSetKeySecurity,'RegSetKeySecurity',\
       RegSetValue,'RegSetValueW',\
       RegSetValueEx,'RegSetValueExW',\
       RegUnLoadKey,'RegUnLoadKeyW',\
       RegisterEventSource,'RegisterEventSourceW',\
       RegisterServiceCtrlHandler,'RegisterServiceCtrlHandlerW',\
       ReportEvent,'ReportEventW',\
       RevertToSelf,'RevertToSelf',\
       SetAclInformation,'SetAclInformation',\
       SetEntriesInAccessList,'SetEntriesInAccessListW',\
       SetEntriesInAcl,'SetEntriesInAclW',\
       SetEntriesInAuditList,'SetEntriesInAuditListW',\
       SetFileSecurity,'SetFileSecurityW',\
       SetKernelObjectSecurity,'SetKernelObjectSecurity',\
       SetNamedSecurityInfo,'SetNamedSecurityInfoW',\
       SetNamedSecurityInfoEx,'SetNamedSecurityInfoExW',\
       SetPrivateObjectSecurity,'SetPrivateObjectSecurity',\
       SetPrivateObjectSecurityEx,'SetPrivateObjectSecurityEx',\
       SetSecurityDescriptorControl,'SetSecurityDescriptorControl',\
       SetSecurityDescriptorDacl,'SetSecurityDescriptorDacl',\
       SetSecurityDescriptorGroup,'SetSecurityDescriptorGroup',\
       SetSecurityDescriptorOwner,'SetSecurityDescriptorOwner',\
       SetSecurityDescriptorSacl,'SetSecurityDescriptorSacl',\
       SetSecurityInfo,'SetSecurityInfo',\
       SetSecurityInfoEx,'SetSecurityInfoExW',\
       SetServiceBits,'SetServiceBits',\
       SetServiceObjectSecurity,'SetServiceObjectSecurity',\
       SetServiceStatus,'SetServiceStatus',\
       SetThreadToken,'SetThreadToken',\
       SetTokenInformation,'SetTokenInformation',\
       StartService,'StartServiceW',\
       StartServiceCtrlDispatcher,'StartServiceCtrlDispatcherW',\
       SynchronizeWindows31FilesAndWindowsNTRegistry,'SynchronizeWindows31FilesAndWindowsNTRegistry',\
       TrusteeAccessToObject,'TrusteeAccessToObjectW',\
       UnlockServiceDatabase,'UnlockServiceDatabase',\
       WriteRaw,'WriteRaw'
